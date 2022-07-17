//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVIndexManager, CKVLocalization;

@interface CKVSkitRebuilder : NSObject
{
    CKVIndexManager *_indexManager;	// 8 = 0x8
    CKVLocalization *_localization;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d7165
- (_Bool)_rebuildSkitUsingLocale:(id)arg1 assetPath:(id)arg2 skitDidOpen:(_Bool *)arg3;	// IMP=0x00000000000d6f97
- (_Bool)rebuildWithAllVocabulary;	// IMP=0x00000000000d6b79
- (id)init;	// IMP=0x00000000000d6b31
- (id)initWithIndexManager:(id)arg1 localization:(id)arg2;	// IMP=0x00000000000d6a73

@end
