#include <drogon/drogon.h>
#include <iostream>

using namespace drogon;

int main() {
    std::cout << "go to localhost:8080/test?username=toto" << std::endl;
    app().setLogPath("./")
         .setLogLevel(trantor::Logger::kWarn)
         .addListener("0.0.0.0", 8080)
         .setThreadNum(16)
         .registerHandler("/test?username={name}",
                [](const HttpRequestPtr& req,
                   std::function<void (const HttpResponsePtr &)> &&callback,
                   const std::string &name)
                {
                    Json::Value json;
                    json["result"]="ok";
                    json["message"]=std::string("hello,")+name;
                    auto resp=HttpResponse::newHttpJsonResponse(json);
                    callback(resp);
                },
                {Get,"LoginFilter"})
         .run();

     return 0;
}

