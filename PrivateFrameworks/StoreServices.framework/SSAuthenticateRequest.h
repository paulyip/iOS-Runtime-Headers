/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, <SSAuthenticateRequestDelegate>;

@interface SSAuthenticateRequest : SSRequest {
    SSAuthenticationContext *_authenticationContext;
}

@property(readonly) SSAuthenticationContext * authenticationContext;
@property <SSAuthenticateRequestDelegate> * delegate;

- (void)_sendResponseToDelegate:(id)arg1;
- (id)authenticationContext;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (id)handleFailureResponse:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)initWithAccount:(id)arg1;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end