//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphPlaceBusinessEdge
{
}

+ (id)filter;	// IMP=0x00000000002e27e3
- (unsigned short)domain;	// IMP=0x00000000002e27d8
- (id)label;	// IMP=0x00000000002e27b9
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x00000000002e25ff
- (id)initFromMomentNode:(id)arg1 toBusinessNode:(id)arg2 weight:(float)arg3 hasRoutineInfo:(_Bool)arg4 universalStartDate:(id)arg5 universalEndDate:(id)arg6;	// IMP=0x00000000002e25c8

@end

