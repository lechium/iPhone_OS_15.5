//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NavMessageSignLayout
{
}

+ (id)sharedMessageSignLayout;	// IMP=0x0020000000a0d78d
- (long long)navSignView:(id)arg1 textAlignmentForMajorText:(_Bool)arg2;	// IMP=0x0020000000a0d973
- (_Bool)navSignView:(id)arg1 shouldAlignToTrailingForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0d956
- (_Bool)navSignView:(id)arg1 shouldAlignToLeadingForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0d939
- (_Bool)shouldAlignMinorToMajorLabelLeadingForSign:(id)arg1;	// IMP=0x0010000000a0d931
- (double)navSignView:(id)arg1 alternateFontLineSpacingForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0d915
- (id)navSignView:(id)arg1 alternateFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0d8c0
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0d887
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000a0d879
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000a0d84d
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000a0d821
- (double)navSignView:(id)arg1 textLeadingMarginForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0d7e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
