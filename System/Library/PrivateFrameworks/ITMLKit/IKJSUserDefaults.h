//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSUserDefaults-Protocol.h>

@protocol IKAppUserDefaultsStoring;

@interface IKJSUserDefaults <IKJSUserDefaults>
{
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000063407
@property(nonatomic) __weak id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
- (void)removeData:(id)arg1;	// IMP=0x0000000000063368
- (void)setData:(id)arg1:(id)arg2;	// IMP=0x000000000006316e
- (id)getData:(id)arg1;	// IMP=0x0000000000062ff8
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;	// IMP=0x0000000000062f87

@end
