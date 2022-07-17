//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID, NSValue;

@interface CXScreenShareAttributes : NSObject <NSSecureCoding>
{
    _Bool _windowed;	// 8 = 0x8
    NSNumber *_frameRate;	// 16 = 0x10
    NSNumber *_displayID;	// 24 = 0x18
    NSUUID *_windowUUID;	// 32 = 0x20
    long long _deviceFamily;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    NSNumber *_displayScale;	// 56 = 0x38
    NSNumber *_scaleFactor;	// 64 = 0x40
    NSValue *_originalResolution;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002969b
- (void).cxx_destruct;	// IMP=0x0000000000029d82
@property(copy, nonatomic) NSValue *originalResolution; // @synthesize originalResolution=_originalResolution;
@property(retain, nonatomic) NSNumber *scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) NSNumber *displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long deviceFamily; // @synthesize deviceFamily=_deviceFamily;
@property(retain, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(nonatomic, getter=isWindowed) _Bool windowed; // @synthesize windowed=_windowed;
@property(retain, nonatomic) NSNumber *displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029965
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000296a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000294d7
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000294cf
- (id)customDescription;	// IMP=0x000000000002928d

@end
