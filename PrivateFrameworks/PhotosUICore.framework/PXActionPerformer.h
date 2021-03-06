/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionPerformer : NSObject {
    NSString * _actionType;
    BOOL  _cancellable;
    id /* block */  _completionHandler;
    <PXActionPerformerDelegate> * _delegate;
    UIViewController * _presentedViewController;
    unsigned int  _state;
    BOOL  _success;
}

@property (nonatomic, readonly) NSString *actionType;
@property (getter=isCancellable, nonatomic, readonly) BOOL cancellable;
@property (nonatomic) <PXActionPerformerDelegate> *delegate;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) BOOL success;

- (void).cxx_destruct;
- (void)_completeStateWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_completeUnlockTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_handleStepFinished:(unsigned int)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned int)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
- (id)actionType;
- (void)cancelActionWithCompletionHandler:(id /* block */)arg1;
- (void)completeBackgroundTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)delegate;
- (BOOL)dismissViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithActionType:(id)arg1;
- (BOOL)isCancellable;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (BOOL)presentViewController:(id)arg1;
- (id)presentedViewController;
- (BOOL)requiresUnlockedDevice;
- (void)setDelegate:(id)arg1;
- (unsigned int)state;
- (BOOL)success;

@end
