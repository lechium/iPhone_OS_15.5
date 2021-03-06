//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WFContextualAction;

@interface WFContextualActionEvent : NSObject
{
    WFContextualAction *_action;	// 8 = 0x8
    NSArray *_contentTypes;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    unsigned long long _surface;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000078b3
@property(readonly, nonatomic) unsigned long long surface; // @synthesize surface=_surface;
@property(readonly, copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(readonly, nonatomic) WFContextualAction *action; // @synthesize action=_action;
- (id)initWithAction:(id)arg1 contentTypes:(id)arg2 containerName:(id)arg3 surface:(unsigned long long)arg4;	// IMP=0x0000000000007731

@end

