//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, NSURL, PKPrintSettings;

@interface PKJob : NSObject
{
    long long number;	// 8 = 0x8
    long long remoteJobId;	// 16 = 0x10
    long long mediaProgress;	// 24 = 0x18
    long long mediaSheets;	// 32 = 0x20
    long long mediaSheetsCompleted;	// 40 = 0x28
    NSString *printerDisplayName;	// 48 = 0x30
    long long printerKind;	// 56 = 0x38
    NSString *printerLocation;	// 64 = 0x40
    PKPrintSettings *settings;	// 72 = 0x48
    long long state;	// 80 = 0x50
    NSDate *timeAtCompleted;	// 88 = 0x58
    NSDate *timeAtCreation;	// 96 = 0x60
    NSDate *timeAtProcessing;	// 104 = 0x68
    NSData *thumbnailImage;	// 112 = 0x70
    NSURL *_printerURI;	// 120 = 0x78
    NSString *_PIN;	// 128 = 0x80
}

+ (id)jobs;	// IMP=0x00000000000078b0
+ (id)currentJob;	// IMP=0x0000000000006a04
@property(retain, nonatomic) NSString *PIN; // @synthesize PIN=_PIN;
@property(retain, nonatomic) NSURL *printerURI; // @synthesize printerURI=_printerURI;
@property(retain, nonatomic) NSData *thumbnailImage; // @synthesize thumbnailImage;
@property(retain, nonatomic) NSDate *timeAtProcessing; // @synthesize timeAtProcessing;
@property(retain, nonatomic) NSDate *timeAtCreation; // @synthesize timeAtCreation;
@property(retain, nonatomic) NSDate *timeAtCompleted; // @synthesize timeAtCompleted;
@property(nonatomic) long long state; // @synthesize state;
@property(retain, nonatomic) PKPrintSettings *settings; // @synthesize settings;
@property(retain, nonatomic) NSString *printerLocation; // @synthesize printerLocation;
@property(nonatomic) long long printerKind; // @synthesize printerKind;
@property(retain, nonatomic) NSString *printerDisplayName; // @synthesize printerDisplayName;
@property(nonatomic) long long mediaSheetsCompleted; // @synthesize mediaSheetsCompleted;
@property(nonatomic) long long mediaSheets; // @synthesize mediaSheets;
@property(nonatomic) long long mediaProgress; // @synthesize mediaProgress;
@property(nonatomic) long long remoteJobId; // @synthesize remoteJobId;
@property(nonatomic) long long number; // @synthesize number;
@property(readonly, nonatomic) NSString *localizedJobOptions;
@property(readonly, nonatomic) NSString *localizedStatusString;
- (long long)update;	// IMP=0x0000000000007bc1
- (long long)cancel;	// IMP=0x0000000000007a90

@end

