//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface WFFontDescriptor : NSObject <NSSecureCoding>
{
    NSDictionary *_attributes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e1817
+ (id)descriptorWithSerializedRepresentation:(id)arg1;	// IMP=0x00000000001e178b
- (void).cxx_destruct;	// IMP=0x00000000001e16af
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (id)fontWithSize:(double)arg1;	// IMP=0x00000000001e1461
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e13e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e1348
- (id)visibleName;	// IMP=0x00000000001e12f1
- (id)face;	// IMP=0x00000000001e129a
- (id)name;	// IMP=0x00000000001e1243
- (id)family;	// IMP=0x00000000001e11ec
- (id)displayName;	// IMP=0x00000000001e11a6
- (id)serializedRepresentation;	// IMP=0x00000000001e1188
- (id)initWithPrivateRepresentation:(id)arg1;	// IMP=0x00000000001e0fbc
- (id)initWithFontAttributes:(id)arg1;	// IMP=0x00000000001e0e12

@end

