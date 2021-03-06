//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQPagesGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHPages : NSObject <GQPagesGenerator>
{
}

+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)arg1 state:(id)arg2;	// IMP=0x000000000002b378
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)arg1 state:(id)arg2;	// IMP=0x000000000002b23a
+ (int)setCurrentPageIndex:(int)arg1 state:(id)arg2;	// IMP=0x000000000002b204
+ (int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;	// IMP=0x000000000002b1b8
+ (int)handleFooters:(struct __CFArray *)arg1 state:(id)arg2;	// IMP=0x000000000002b180
+ (int)handleHeaders:(struct __CFArray *)arg1 state:(id)arg2;	// IMP=0x000000000002b148
+ (Class)enterBodyStorage:(id)arg1;	// IMP=0x000000000002b137
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(id)arg2;	// IMP=0x000000000002b126
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;	// IMP=0x000000000002b11b
+ (int)handlePageSetup:(id)arg1 state:(id)arg2;	// IMP=0x000000000002aa1e
+ (int)endPublication:(id)arg1 state:(id)arg2;	// IMP=0x000000000002a6fc
+ (int)beginPublication:(id)arg1 state:(id)arg2;	// IMP=0x000000000002a6f1
+ (void)mapHeaderOrFooter:(id)arg1 isHeader:(_Bool)arg2 toPublication:(id)arg3 state:(id)arg4;	// IMP=0x000000000002b70e
+ (void)handlePagesOrders:(id)arg1;	// IMP=0x000000000002b5f7
+ (void)handleZOrder:(unsigned int)arg1 cssClassName:(struct __CFString *)arg2 state:(id)arg3;	// IMP=0x000000000002b5a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

