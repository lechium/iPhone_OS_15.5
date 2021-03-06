//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIdentifier : NSObject <NSCopying>
{
    id _object;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
}

+ (id)uninternedIdentifierForObject:(id)arg1 string:(id)arg2;	// IMP=0x0000000000df373c
+ (id)identifierForObject:(id)arg1 string:(id)arg2;	// IMP=0x0000000000df3609
+ (id)displayIdentifierFromStringRepresentation:(id)arg1;	// IMP=0x0000000000df3960
- (void).cxx_destruct;	// IMP=0x0000000000df3938
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) id object; // @synthesize object=_object;
- (id)description;	// IMP=0x0000000000df37d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000df37c8
@property(readonly, copy, nonatomic) NSString *stringRepresentation;

@end

