//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDMessagePTask : NSObject
{
    NSString *_guid;	// 8 = 0x8
    unsigned long long _taskFlags;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long taskFlags; // @synthesize taskFlags=_taskFlags;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)compeletedTask:(unsigned long long)arg1;	// IMP=0x00000000000c485a
- (_Bool)needsProccesingFor:(unsigned long long)arg1;	// IMP=0x00000000000c484d
- (void)setTaskFlag:(unsigned long long)arg1;	// IMP=0x00000000000c4843
- (void)dealloc;	// IMP=0x00000000000c4800
- (id)initWithStoreDictionary:(id)arg1;	// IMP=0x00000000000c478c
- (id)initWithGUID:(id)arg1;	// IMP=0x00000000000c4734

@end

