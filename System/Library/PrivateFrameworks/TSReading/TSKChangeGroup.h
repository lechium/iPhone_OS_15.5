//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *mChangesArray;	// 8 = 0x8
}

@property(readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=mChangesArray;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;	// IMP=0x0000000000083c16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083bd5
- (void)dealloc;	// IMP=0x0000000000083b9a
- (id)init;	// IMP=0x0000000000083b4e

@end

