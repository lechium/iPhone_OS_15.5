//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SXDataFormat, SXFormattedText;

@interface SXDataDescriptor
{
}

- (id)description;	// IMP=0x00000000000a4c13
- (unsigned long long)dataTypeWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x00000000000a4b20
- (id)labelWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x00000000000a4a14
- (id)formatWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x00000000000a4912

// Remaining properties
@property(readonly, nonatomic) unsigned long long dataType; // @dynamic dataType;
@property(readonly, nonatomic) SXDataFormat *format; // @dynamic format;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *key; // @dynamic key;
@property(readonly, nonatomic) SXFormattedText *label; // @dynamic label;

@end

