//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICommand;

@interface MFMailMenuCommand : NSObject
{
    UICommand *_command;	// 8 = 0x8
    long long _menu;	// 16 = 0x10
}

+ (id)shortcutWithInput:(id)arg1 flags:(long long)arg2 repeatable:(_Bool)arg3 menu:(long long)arg4 action:(SEL)arg5 title:(id)arg6 plist:(id)arg7;	// IMP=0x00000000000cb50b
+ (id)shortcutWithInput:(id)arg1 flags:(long long)arg2 repeatable:(_Bool)arg3 menu:(long long)arg4 action:(SEL)arg5;	// IMP=0x00000000000cb4d1
+ (id)shortcutWithCommand:(id)arg1 menu:(long long)arg2;	// IMP=0x00000000000cb464
- (void).cxx_destruct;	// IMP=0x00000000000cb6c1
@property(readonly, nonatomic) long long menu; // @synthesize menu=_menu;
@property(readonly, nonatomic) UICommand *command; // @synthesize command=_command;
- (id)initWithCommand:(id)arg1 menu:(long long)arg2;	// IMP=0x00000000000cb623

@end

