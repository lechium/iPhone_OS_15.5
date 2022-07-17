//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DrawingKit/NSCopying-Protocol.h>
#import <DrawingKit/NSSecureCoding-Protocol.h>

@class DKDrawing, NSDate, NSUUID;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSDate *_creationDate;	// 16 = 0x10
    DKDrawing *_drawing;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017654
- (void).cxx_destruct;	// IMP=0x0000000000017847
@property(retain) DKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001775b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001765c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000175b8
- (id)init;	// IMP=0x00000000000175a4
- (id)initWithDrawing:(id)arg1;	// IMP=0x00000000000174d9

@end
