//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDatabase/CADObjectID.h>

@interface CADGenerationStampedObjectID : CADObjectID
{
    int _restoreGeneration;	// 8 = 0x8
}

@property(readonly, nonatomic) int restoreGeneration; // @synthesize restoreGeneration=_restoreGeneration;
- (Class)classForCoder;	// IMP=0x0000000000025360
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002518e
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2 generation:(int)arg3;	// IMP=0x000000000002514b

@end
