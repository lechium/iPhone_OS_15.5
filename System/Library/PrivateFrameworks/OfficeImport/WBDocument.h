//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBDocument : NSObject
{
}

+ (id)readFrom:(id)arg1;	// IMP=0x00000000000ba13f
+ (void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3;	// IMP=0x000000000015bc4a
+ (void)readProperties:(id)arg1 document:(id)arg2;	// IMP=0x00000000000c28d5
+ (void)readTextBoxesFrom:(id)arg1;	// IMP=0x00000000000eaa30
+ (void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3;	// IMP=0x00000000000eab3a
+ (void)readSectionsFrom:(id)arg1 document:(id)arg2;	// IMP=0x00000000000d3d29
+ (void)setTimeStamp:(struct WrdDocumentProperties *)arg1;	// IMP=0x00000000003e7c88
- (id)applicationName;	// IMP=0x00000000003e7c7b
- (id)init;	// IMP=0x00000000003e7c40

@end
