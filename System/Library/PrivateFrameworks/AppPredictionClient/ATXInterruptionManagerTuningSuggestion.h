//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>
{
    int _suggestionType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000062902
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
- (id)jsonRawData;	// IMP=0x0000000000062a10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000062983
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006290a
- (id)proto;	// IMP=0x00000000000628c9
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000062794
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000626f8
- (id)encodeAsProto;	// IMP=0x00000000000626a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062670
- (id)description;	// IMP=0x00000000000625a7
- (unsigned long long)hash;	// IMP=0x000000000006259d
- (_Bool)isEqualToATXInterruptionManagerTuningSuggestion:(id)arg1;	// IMP=0x0000000000062578
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062510
- (id)feedbackKeyComponent;	// IMP=0x000000000006243d
- (id)initWithSuggestionType:(int)arg1;	// IMP=0x0000000000062402
- (id)init;	// IMP=0x00000000000623fc

@end

