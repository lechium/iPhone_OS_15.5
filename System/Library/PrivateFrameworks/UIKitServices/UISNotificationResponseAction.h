//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction
{
    UNNotificationResponse *_response;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005e69
@property(readonly, retain, nonatomic) UNNotificationResponse *response; // @synthesize response=_response;
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000005dfd
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000005dc3
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000005dac
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000005d09
- (long long)UIActionType;	// IMP=0x0000000000005cfe
- (id)_trigger;	// IMP=0x0000000000005c5d
@property(readonly, nonatomic) _Bool isDefaultAction;
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000057b5

@end
