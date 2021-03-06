//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>

@class NSNumber, NSString, WFImage;

@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming>
{
    _Bool _boundsLoaded;	// 8 = 0x8
    int _processIdentifier;	// 12 = 0xc
    WFImage *_image;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_applicationName;	// 32 = 0x20
    NSNumber *_windowIndex;	// 40 = 0x28
    struct CGRect _bounds;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cdbbf
+ (id)allWindowsForBundleIdentifiers:(id)arg1;	// IMP=0x00000000000aa659
+ (id)allWindows;	// IMP=0x00000000000aa64c
- (void).cxx_destruct;	// IMP=0x00000000000cdb81
@property(nonatomic) _Bool boundsLoaded; // @synthesize boundsLoaded=_boundsLoaded;
@property(retain, nonatomic) NSNumber *windowIndex; // @synthesize windowIndex=_windowIndex;
@property(readonly, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x00000000000cdb08
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cd9da
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cd884
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd879
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) WFImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) _Bool isOnScreen;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize size;
- (void)setBoundsNeedReloading;	// IMP=0x00000000000cd7e8
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSString *bundleIdentifier;

@end

