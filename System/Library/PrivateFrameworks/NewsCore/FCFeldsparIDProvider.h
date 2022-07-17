//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeldsparIDProvider-Protocol.h>
#import <NewsCore/FCUserInfoObserving-Protocol.h>

@class FCUserInfo, NSHashTable, NSString;

@interface FCFeldsparIDProvider : NSObject <FCUserInfoObserving, FCFeldsparIDProvider>
{
    FCUserInfo *_userInfo;	// 8 = 0x8
    NSString *_feldsparID;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000000a9800
- (void).cxx_destruct;	// IMP=0x00000000000aa0d5
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSString *feldsparID; // @synthesize feldsparID=_feldsparID;
@property(retain, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)_updateFeldsparID:(id)arg1;	// IMP=0x00000000000a9e62
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(_Bool)arg2;	// IMP=0x00000000000a9e13
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000a9cb9
- (void)addObserver:(id)arg1;	// IMP=0x00000000000a9b5f
- (void)registerUserInfo:(id)arg1;	// IMP=0x00000000000a99c2
- (id)init;	// IMP=0x00000000000a9855

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
