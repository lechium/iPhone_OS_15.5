//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSThread;

@interface TDThreadMOCOrganizer : NSObject
{
    NSThread *mainThread;	// 8 = 0x8
    CoreThemeDocument *document;	// 16 = 0x10
}

- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;	// IMP=0x000000000004f036
- (id)init;	// IMP=0x000000000004efd4
- (id)threadMOC;	// IMP=0x000000000004eed2
- (id)mainMOC;	// IMP=0x000000000004eea7
- (id)document;	// IMP=0x000000000004ee9d
- (id)mainThread;	// IMP=0x000000000004ee2e
- (void)setThreadMOC:(id)arg1;	// IMP=0x000000000004ed23

@end

