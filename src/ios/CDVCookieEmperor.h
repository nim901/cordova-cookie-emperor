#import <Cordova/CDVPlugin.h>

@interface CDVCookieEmperor : CDVPlugin

- (void)getCookies:(CDVInvokedUrlCommand*)command;
- (void)getCookieValue:(CDVInvokedUrlCommand*)command;
- (void)setCookieValue:(CDVInvokedUrlCommand*)command;
- (void)clearCookies:(CDVInvokedUrlCommand*)command;

@end
