//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBAppVisibilityPreferences : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_containerPath;	// 16 = 0x10
    _Bool _defaultVisible;	// 24 = 0x18
    _Bool _currentlyVisible;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000001b8f82
@property(readonly, getter=isCurrentlyVisible) _Bool currentlyVisible;
@property(readonly, getter=isDefaultVisible) _Bool defaultVisible; // @synthesize defaultVisible=_defaultVisible;
- (_Bool)update;	// IMP=0x00000000001b8ed1
- (id)description;	// IMP=0x00000000001b8e1e
- (id)initWithDefaultVisible:(_Bool)arg1 bundleID:(id)arg2 containerPath:(id)arg3;	// IMP=0x00000000001b8d44

@end
