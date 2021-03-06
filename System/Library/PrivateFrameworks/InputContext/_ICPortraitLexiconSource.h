//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InputContext/_ICFeedbackAccepting-Protocol.h>
#import <InputContext/_ICLexiconSourcing-Protocol.h>

@class PPContactNameRecordLoadingDelegate, PPContactStore, PPNamedEntityRecordLoadingDelegate, PPNamedEntityStore, _ICLexiconManager;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting>
{
    _ICLexiconManager *_manager;	// 8 = 0x8
    PPContactStore *_contactStore;	// 16 = 0x10
    PPContactNameRecordLoadingDelegate *_contactDelegate;	// 24 = 0x18
    PPNamedEntityStore *_namedEntityStore;	// 32 = 0x20
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000b77e
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;	// IMP=0x000000000000b62b
- (id)_makeNamedEntityDelegate;	// IMP=0x000000000000af76
- (id)_makeContactDelegate;	// IMP=0x000000000000aa20
- (void)hibernate;	// IMP=0x000000000000aa1a
- (void)warmUp;	// IMP=0x000000000000aa14
- (void)startLoadingWithManager:(id)arg1;	// IMP=0x000000000000a85f
- (id)_makePPNamedEntityStore;	// IMP=0x000000000000a7d6
- (id)init;	// IMP=0x000000000000a755

@end

