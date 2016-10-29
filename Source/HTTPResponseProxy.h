#import <Foundation/Foundation.h>
#import <CocoaHTTPServerKit/CocoaHTTPServerKit.h>

// Wraps an HTTPResponse object to allow setting a custom status code
// without needing to create subclasses of every response.
@interface HTTPResponseProxy : NSObject <HTTPResponse>

@property (nonatomic) NSObject<HTTPResponse> *response;
@property (nonatomic) NSInteger status;

- (NSInteger)customStatus;

@end
