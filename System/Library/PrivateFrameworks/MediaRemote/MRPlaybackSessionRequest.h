//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionRequest : NSObject
{
    _Bool _hasLocation;	// 8 = 0x8
    _Bool _hasLength;	// 9 = 0x9
    NSString *_requestIdentifier;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    unsigned long long _location;	// 40 = 0x28
    unsigned long long _length;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014596f
@property(nonatomic) _Bool hasLength; // @synthesize hasLength=_hasLength;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (id)description;	// IMP=0x000000000014582c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014546b
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *protobuf;
- (id)initWithData:(id)arg1;	// IMP=0x00000000001451d6
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000014507a
- (id)initWithIdentifier:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000144feb
- (id)initWithIdentifier:(id)arg1 type:(id)arg2;	// IMP=0x0000000000144f32

@end

