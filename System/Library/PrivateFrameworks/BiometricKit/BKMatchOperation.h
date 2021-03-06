//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber;
@protocol BKMatchOperationDelegate;

@interface BKMatchOperation
{
    _Bool _stopOnSuccess;	// 40 = 0x28
    _Bool _captureOnly;	// 41 = 0x29
    long long _purpose;	// 48 = 0x30
    NSNumber *_userID;	// 56 = 0x38
    NSArray *_selectedIdentities;	// 64 = 0x40
    long long _priority;	// 72 = 0x48
    NSData *_credentialSet;	// 80 = 0x50
    long long _useCase;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000005661
@property(nonatomic) _Bool captureOnly; // @synthesize captureOnly=_captureOnly;
@property(nonatomic) _Bool stopOnSuccess; // @synthesize stopOnSuccess=_stopOnSuccess;
@property(nonatomic) long long useCase; // @synthesize useCase=_useCase;
@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSArray *selectedIdentities; // @synthesize selectedIdentities=_selectedIdentities;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
- (void)simulateMatching:(_Bool)arg1 type:(long long)arg2;	// IMP=0x00000000000053b4
- (void)dealloc;	// IMP=0x0000000000005373
- (id)init;	// IMP=0x00000000000051e5

// Remaining properties
@property(nonatomic) __weak id <BKMatchOperationDelegate> delegate; // @dynamic delegate;

@end

