/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, RCComposition, _RCTimeRangeFileInputWaveformDataSource;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {
    _RCTimeRangeFileInputWaveformDataSource *_activeFragmentDataSource;
    RCComposition *_composition;
    NSOperationQueue *_fragmentLoadingOperationQueue;
    BOOL _highlightLastDecomposedFragment;
    BOOL _preferLoadingFragmentWaveforms;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
    BOOL _saveGeneratedWaveform;
    NSObject<OS_dispatch_queue> *_searialQueue;
}

@property(readonly) RCComposition * composition;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSOperationQueue * fragmentLoadingOperationQueue;
@property(readonly) unsigned int hash;
@property BOOL highlightLastDecomposedFragment;
@property(readonly) BOOL preferLoadingFragmentWaveforms;
@property BOOL saveGeneratedWaveform;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_synchronouslyAppendSegmentsForAVContentURL:(id)arg1 isDecomposedFragment:(BOOL)arg2 sourceTimeRange:(struct { double x1; double x2; })arg3 destinationTime:(double)arg4;
- (id)composition;
- (double)duration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (id)fragmentLoadingOperationQueue;
- (BOOL)highlightLastDecomposedFragment;
- (id)initWithComposition:(id)arg1;
- (float)loadingProgress;
- (BOOL)preferLoadingFragmentWaveforms;
- (BOOL)saveGeneratedWaveform;
- (id)saveableWaveform;
- (void)setFragmentLoadingOperationQueue:(id)arg1;
- (void)setHighlightLastDecomposedFragment:(BOOL)arg1;
- (void)setSaveGeneratedWaveform:(BOOL)arg1;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeToHighlight;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;

@end