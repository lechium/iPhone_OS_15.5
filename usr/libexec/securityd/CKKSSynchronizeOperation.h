//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSKeychainView;

__attribute__((visibility("hidden")))
@interface CKKSSynchronizeOperation
{
    int _restartCount;	// 12 = 0xc
    CKKSKeychainView *_ckks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b57a8
@property int restartCount; // @synthesize restartCount=_restartCount;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
- (void)groupStart;	// IMP=0x00100000000b4daa
- (id)initWithCKKSKeychainView:(id)arg1;	// IMP=0x00100000000b4d35
- (id)init;	// IMP=0x00100000000b4d27

@end

