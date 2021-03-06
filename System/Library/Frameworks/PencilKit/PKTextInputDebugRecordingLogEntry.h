//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHTextInputQueryItem, PKDrawing;

@interface PKTextInputDebugRecordingLogEntry
{
    CHTextInputQueryItem *__resultQueryItem;	// 136 = 0x88
    PKDrawing *__originalDrawing;	// 144 = 0x90
}

+ (id)_dictionaryRepresentationForTargetContentInfo:(id)arg1 elementType:(id)arg2 detailLevel:(long long)arg3 contentLevel:(long long)arg4 resultAffectedRange:(struct _NSRange)arg5 localeIdentifiers:(id)arg6;	// IMP=0x000000000026eedd
+ (id)_dictionaryRepresentationForTarget:(id)arg1;	// IMP=0x000000000026edc2
+ (id)_dictionaryRepresentationForDrawing:(id)arg1 detailLevel:(long long)arg2 containsInProgress:(_Bool)arg3;	// IMP=0x000000000026ebf6
- (void).cxx_destruct;	// IMP=0x000000000026f752
@property(retain, nonatomic) PKDrawing *_originalDrawing; // @synthesize _originalDrawing=__originalDrawing;
@property(retain, nonatomic) CHTextInputQueryItem *_resultQueryItem; // @synthesize _resultQueryItem=__resultQueryItem;
- (id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2;	// IMP=0x000000000026e3e2
- (id)inputDrawing;	// IMP=0x000000000026dfc4
- (void)_extractDataFromResultCommand:(id)arg1;	// IMP=0x000000000026d99c
- (id)initWithResultCommand:(id)arg1;	// IMP=0x000000000026d934

@end

