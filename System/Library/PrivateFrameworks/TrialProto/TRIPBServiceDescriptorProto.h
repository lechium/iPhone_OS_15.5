//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, TRIPBServiceOptions;

@interface TRIPBServiceDescriptorProto
{
}

+ (id)descriptor;	// IMP=0x000000000005795c

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) NSMutableArray *methodArray; // @dynamic methodArray;
@property(readonly, nonatomic) unsigned long long methodArray_Count; // @dynamic methodArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TRIPBServiceOptions *options; // @dynamic options;

@end

