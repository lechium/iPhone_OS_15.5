//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSMapTable;

@interface NSPredicate (PDAdditions)
- (void)_populateKeypathValueMap:(id)arg1;	// IMP=0x00200000000985d9
@property(readonly, nonatomic) NSMapTable *pd_keypathValueMap;
- (_Bool)pd_containsKeyPath:(id)arg1;	// IMP=0x001000000009857f
- (id)pd_scopeToKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x0010000000098477
- (id)pd_filterSubpredicatesForKeyPath:(id)arg1;	// IMP=0x001000000009846e
- (id)pd_andCompoundWith:(id)arg1;	// IMP=0x0010000000098396
@end
