//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GPBListValue, GPBStruct, NSString;

__attribute__((visibility("hidden")))
@interface GPBValue
{
}

+ (id)descriptor;	// IMP=0x00000000000724ee

// Remaining properties
@property(nonatomic) _Bool boolValue; // @dynamic boolValue;
@property(readonly, nonatomic) int kindOneOfCase; // @dynamic kindOneOfCase;
@property(retain, nonatomic) GPBListValue *listValue; // @dynamic listValue;
@property(nonatomic) int nullValue; // @dynamic nullValue;
@property(nonatomic) double numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(retain, nonatomic) GPBStruct *structValue; // @dynamic structValue;

@end
