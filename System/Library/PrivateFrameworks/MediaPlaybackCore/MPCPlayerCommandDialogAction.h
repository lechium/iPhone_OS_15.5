//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaRemoteController, MPRemoteCommandHandlerDialogAction, NSString;

@interface MPCPlayerCommandDialogAction : NSObject
{
    MPRemoteCommandHandlerDialogAction *_action;	// 8 = 0x8
    MPCMediaRemoteController *_controller;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ae0b8
- (id)commandRequest;	// IMP=0x00000000000adf62
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) long long type;
- (id)description;	// IMP=0x00000000000ade43
- (id)initWithMPAction:(id)arg1 request:(id)arg2;	// IMP=0x00000000000add90

@end
