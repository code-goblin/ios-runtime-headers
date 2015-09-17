/* Generated by RuntimeBrowser.
 */

@protocol OKActionResponderPrivate <OKActionResponder>

@required

- (OKActionBinding *)actionBindingForAction:(OKAction *)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (void)addActionBinding:(OKActionBinding *)arg1 scope:(unsigned int)arg2;
- (NSSet *)allActionBindings;
- (void)removeActionBinding:(OKActionBinding *)arg1;
- (void)removeAllActionBindings;

@end