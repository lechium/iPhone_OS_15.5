//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXUserFeedbackAudioContentMutating-Protocol.h>

@class NSString, NSURL, SVXUserFeedbackAudioContent;

__attribute__((visibility("hidden")))
@interface _SVXUserFeedbackAudioContentMutation : NSObject <SVXUserFeedbackAudioContentMutating>
{
    SVXUserFeedbackAudioContent *_baseModel;	// 8 = 0x8
    NSURL *_itemURL;	// 16 = 0x10
    unsigned long long _numberOfLoops;	// 24 = 0x18
    double _fadeInDuration;	// 32 = 0x20
    double _fadeOutDuration;	// 40 = 0x28
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasItemURL:1;
        unsigned int hasNumberOfLoops:1;
        unsigned int hasFadeInDuration:1;
        unsigned int hasFadeOutDuration:1;
    } _mutationFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000007a9c
- (id)generate;	// IMP=0x0000000000007942
- (void)setFadeOutDuration:(double)arg1;	// IMP=0x0000000000007933
- (void)setFadeInDuration:(double)arg1;	// IMP=0x0000000000007924
- (void)setNumberOfLoops:(unsigned long long)arg1;	// IMP=0x0000000000007916
- (void)setItemURL:(id)arg1;	// IMP=0x00000000000078f6
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000000788b
- (id)init;	// IMP=0x0000000000007877

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

