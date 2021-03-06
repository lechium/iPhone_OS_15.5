//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXUserFeedbackVoiceContentMutating-Protocol.h>

@class NSString, SVXUserFeedbackVoiceContent;

__attribute__((visibility("hidden")))
@interface _SVXUserFeedbackVoiceContentMutation : NSObject <SVXUserFeedbackVoiceContentMutating>
{
    SVXUserFeedbackVoiceContent *_baseModel;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    _Bool _isPhonetic;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasText:1;
        unsigned int hasIsPhonetic:1;
    } _mutationFlags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000013ea4
- (id)generate;	// IMP=0x0000000000013db2
- (void)setIsPhonetic:(_Bool)arg1;	// IMP=0x0000000000013da5
- (void)setText:(id)arg1;	// IMP=0x0000000000013d85
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000013d1a
- (id)init;	// IMP=0x0000000000013d06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

