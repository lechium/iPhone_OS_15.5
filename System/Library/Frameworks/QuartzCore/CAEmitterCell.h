//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMediaTiming-Protocol.h>
#import <QuartzCore/CAPropertyInfo-Protocol.h>
#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSSecureCoding, CAMediaTiming>
{
    void *_attr[2];	// 8 = 0x8
    void *_state;	// 24 = 0x18
    unsigned int _flags;	// 32 = 0x20
}

+ (void)CAMLParserStartElement:(id)arg1;	// IMP=0x00000000000aaf3d
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x00000000000aaf1b
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000aaefc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aaef4
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x00000000000aac85
+ (id)emitterCell;	// IMP=0x00000000000aac73
+ (id)properties;	// IMP=0x00000000000ab51c
@property(copy) NSArray *emitterCells;
@property float minificationFilterBias;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property double contentsScale;
@property struct CGRect contentsRect;
@property(retain) id contents;
@property float alphaSpeed;
@property float alphaRange;
@property float blueSpeed;
@property float blueRange;
@property float greenSpeed;
@property float greenRange;
@property float redSpeed;
@property float redRange;
@property struct CGColor *color;
@property double spinRange;
@property double spin;
@property double rotationRange;
@property double rotation;
@property double orientationRange;
@property double orientationLongitude;
@property double orientationLatitude;
@property double scaleSpeed;
@property double scaleRange;
@property double scale;
@property double zAcceleration;
@property double yAcceleration;
@property double xAcceleration;
@property double velocityRange;
@property double velocity;
@property double emissionRange;
@property double emissionLongitude;
@property double emissionLatitude;
@property float lifetimeRange;
@property float lifetime;
@property float birthRate;
@property(copy) NSDictionary *style;
@property(getter=isEnabled) _Bool enabled;
@property(copy) NSString *name;
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property float speed;
@property double duration;
@property double timeOffset;
@property double beginTime;
- (_Bool)CA_validateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a8bc6
- (_Bool)CAMLTypeSupportedForKey:(id)arg1;	// IMP=0x00000000000a8b49
- (id)CAMLTypeForKey:(id)arg1;	// IMP=0x00000000000a8b3c
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x00000000000a8b2f
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000000a8b17
- (id)debugDescription;	// IMP=0x00000000000a8a50
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x00000000000a899a
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000a8988
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00000000000a897b
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000a8889
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000a87c0
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a877e
- (id)valueForKey:(id)arg1;	// IMP=0x00000000000a874b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a873e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a8731
- (_Bool)shouldArchiveValueForKey:(id)arg1;	// IMP=0x00000000000a869b
- (struct Object *)CA_copyRenderValue;	// IMP=0x00000000000a7e98
- (void)CA_prepareRenderValue;	// IMP=0x00000000000a7e4a
- (void)dealloc;	// IMP=0x00000000000a7d88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ab43c
@property float contentsFramesPerSecond;
@property unsigned int contentsFramesPerRow;
@property unsigned int contentsFrameCount;
@property(copy) NSString *contentsFrameMode;
@property(copy) NSArray *emitterBehaviors;
@property float massRange;
@property float mass;
@property(copy) NSString *particleType;

@end
