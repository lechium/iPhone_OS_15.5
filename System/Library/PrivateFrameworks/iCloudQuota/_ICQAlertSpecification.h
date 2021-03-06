//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface _ICQAlertSpecification : NSObject
{
    NSDictionary *_serverDict;	// 8 = 0x8
    _Bool _disableLockScreenAlert;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
    NSString *_altMessage;	// 40 = 0x28
    NSString *_lockScreenTitle;	// 48 = 0x30
    NSString *_lockScreenMessage;	// 56 = 0x38
    NSString *_altLockScreenMessage;	// 64 = 0x40
    long long _defaultButtonIndex;	// 72 = 0x48
    NSMutableDictionary *_linkForButtonIndex;	// 80 = 0x50
}

+ (id)alertSpecificationDictionarySampleForLevel:(long long)arg1;	// IMP=0x000000000000ab50
+ (id)alertSpecificationSampleForLevel:(long long)arg1;	// IMP=0x000000000000aadc
- (void).cxx_destruct;	// IMP=0x0000000000002ae7
@property(retain) NSMutableDictionary *linkForButtonIndex; // @synthesize linkForButtonIndex=_linkForButtonIndex;
@property(nonatomic) long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(nonatomic) _Bool disableLockScreenAlert; // @synthesize disableLockScreenAlert=_disableLockScreenAlert;
@property(retain, nonatomic) NSString *altLockScreenMessage; // @synthesize altLockScreenMessage=_altLockScreenMessage;
@property(retain, nonatomic) NSString *lockScreenMessage; // @synthesize lockScreenMessage=_lockScreenMessage;
@property(retain, nonatomic) NSString *lockScreenTitle; // @synthesize lockScreenTitle=_lockScreenTitle;
@property(retain, nonatomic) NSString *altMessage; // @synthesize altMessage=_altMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *serverDict;
- (void)_setLinks:(id)arg1 defaultIndex:(unsigned long long)arg2;	// IMP=0x00000000000022cb
- (void)setLink:(id)arg1 forButtonIndex:(long long)arg2 defaultButton:(_Bool)arg3;	// IMP=0x000000000000226c
- (void)setLink:(id)arg1 forButtonIndex:(long long)arg2;	// IMP=0x00000000000021b5
- (id)linkForButtonIndex:(long long)arg1;	// IMP=0x000000000000212e
- (id)initWithServerDictionary:(id)arg1;	// IMP=0x00000000000020dc
- (id)init;	// IMP=0x0000000000002086

@end

