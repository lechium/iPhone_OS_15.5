//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/MAUniquelyIdentifiableNode-Protocol.h>

@class MANodeFilter, NSString;

@interface PGGraphMobilityNode <MAUniquelyIdentifiableNode>
{
    NSString *_label;	// 8 = 0x8
}

+ (unsigned long long)mobilityTypeForMobilityLabel:(id)arg1;	// IMP=0x000000000016dc12
+ (id)filter;	// IMP=0x000000000016dbe2
- (void).cxx_destruct;	// IMP=0x000000000016dbcf
- (id)label;	// IMP=0x000000000016dbbe
@property(readonly, nonatomic) unsigned long long mobilityType;
@property(readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;
- (unsigned short)domain;	// IMP=0x000000000016db15
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000016db03
- (id)initWithLabel:(id)arg1;	// IMP=0x000000000016da89

@end
