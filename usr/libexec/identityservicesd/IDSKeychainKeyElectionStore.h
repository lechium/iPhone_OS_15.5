//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper;

@interface IDSKeychainKeyElectionStore : NSObject
{
    IDSKeychainWrapper *_keychainWrapper;	// 8 = 0x8
}

+ (_Bool)isItemNotFoundError:(id)arg1;	// IMP=0x004000000014e940
- (void).cxx_destruct;	// IMP=0x0020000000150a60
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (id)_fullClusterFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000150810
- (id)_keychainEntryForCluster:(id)arg1;	// IMP=0x0010000000150600
- (_Bool)removeFullClusterWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001502a0
- (void)_storeData:(id)arg1 forIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000150040
- (void)storeFullCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000014f780
- (id)fetchFullClusterWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000014eca0
- (id)initWithKeychainWrapper:(id)arg1;	// IMP=0x001000000014ebe0
- (id)identifierForFullCluster:(id)arg1;	// IMP=0x001000000014e9b0

@end

