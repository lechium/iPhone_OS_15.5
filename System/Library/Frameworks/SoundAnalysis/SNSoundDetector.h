//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSoundDetector <SNAnalyzing>
{
}

+ (id)detectorHeadConfigurationForDetectorIdentifier:(id)arg1 soundIdentifier:(id)arg2 modelConfiguration:(id)arg3;	// IMP=0x0000000000038e78
+ (id)detectorHeadConfigurationForDetectorVariant:(id)arg1 soundIdentifier:(id)arg2 modelConfiguration:(id)arg3;	// IMP=0x0000000000038c52
+ (id)detectorConfigurationWithAudioBasedFeatureExtractor:(id)arg1 detectorHead:(id)arg2 detectorIdentifier:(id)arg3;	// IMP=0x0000000000038a99
+ (id)detectorConfigurationWithLogMelBasedFeatureExtractor:(id)arg1 detectorHead:(id)arg2 detectorIdentifier:(id)arg3 soundIdentifier:(id)arg4;	// IMP=0x000000000003892b
- (id)initWithDetectorVariant:(id)arg1 soundIdentifier:(id)arg2 modelConfiguration:(id)arg3;	// IMP=0x0000000000039299

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct Box *resultsBox;
@property(readonly) Class superclass;

@end
