//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIActionAlertActionItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    VUIAction *_action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015f064
@property(retain, nonatomic) VUIAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 action:(id)arg2;	// IMP=0x000000000015ef95

@end

