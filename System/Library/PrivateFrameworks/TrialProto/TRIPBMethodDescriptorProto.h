//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto
{
}

+ (id)descriptor;	// IMP=0x0000000000057a47

// Remaining properties
@property(nonatomic) _Bool clientStreaming; // @dynamic clientStreaming;
@property(nonatomic) _Bool hasClientStreaming; // @dynamic hasClientStreaming;
@property(nonatomic) _Bool hasInputType; // @dynamic hasInputType;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasOutputType; // @dynamic hasOutputType;
@property(nonatomic) _Bool hasServerStreaming; // @dynamic hasServerStreaming;
@property(copy, nonatomic) NSString *inputType; // @dynamic inputType;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TRIPBMethodOptions *options; // @dynamic options;
@property(copy, nonatomic) NSString *outputType; // @dynamic outputType;
@property(nonatomic) _Bool serverStreaming; // @dynamic serverStreaming;

@end

