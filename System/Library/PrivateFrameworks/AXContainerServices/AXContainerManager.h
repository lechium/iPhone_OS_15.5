//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXUIClient;

@interface AXContainerManager : NSObject
{
    AXUIClient *_containerServerClient;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x00000000000013c5
- (void).cxx_destruct;	// IMP=0x0000000000001b5e
@property(retain, nonatomic) AXUIClient *containerServerClient; // @synthesize containerServerClient=_containerServerClient;
- (void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000019ab
- (void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000017dd
- (void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000141a

@end

