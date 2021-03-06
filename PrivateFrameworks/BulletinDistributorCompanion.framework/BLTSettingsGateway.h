/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingsGateway : NSObject {
    BBSettingsGateway * _actualSettingsGateway;
    NSLock * _actualSettingsGatewayLock;
    int  _token;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateWithQueue:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
