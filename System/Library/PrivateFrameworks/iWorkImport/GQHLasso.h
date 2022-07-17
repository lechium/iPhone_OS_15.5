//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQLassoGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHLasso : NSObject <GQLassoGenerator>
{
}

+ (int)handleDrawableZOrder:(const char *)arg1 state:(id)arg2;	// IMP=0x000000000002815f
+ (Class)beginWorkspacePage:(id)arg1 state:(id)arg2;	// IMP=0x000000000002814e
+ (int)handleWorkspaceStyle:(id)arg1 state:(id)arg2;	// IMP=0x0000000000028143
+ (int)endWorkspace:(id)arg1;	// IMP=0x0000000000028112
+ (int)beginWorkspace:(const char *)arg1 state:(id)arg2;	// IMP=0x0000000000028051
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;	// IMP=0x000000000002800a
+ (int)endDocument:(id)arg1 state:(id)arg2;	// IMP=0x0000000000027f68
+ (int)beginDocument:(id)arg1 state:(id)arg2;	// IMP=0x0000000000027f0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
