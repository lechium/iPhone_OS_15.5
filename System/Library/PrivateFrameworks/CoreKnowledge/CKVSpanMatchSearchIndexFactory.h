//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchSearchIndexProvider-Protocol.h>

@class CKVIndexManager, CKVSettings, NSString;

@interface CKVSpanMatchSearchIndexFactory : NSObject <CKVSpanMatchSearchIndexProvider>
{
    CKVIndexManager *_indexManager;	// 8 = 0x8
    CKVSettings *_settings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2766
- (id)makeSearchIndex;	// IMP=0x00000000000a272b
- (id)init;	// IMP=0x00000000000a26e3
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;	// IMP=0x00000000000a2571

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
