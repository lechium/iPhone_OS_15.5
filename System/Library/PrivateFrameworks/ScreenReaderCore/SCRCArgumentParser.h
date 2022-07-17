//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSString, SCRCArgumentSubcommand;

@interface SCRCArgumentParser
{
    _Bool _isLaunchedAtLogin;	// 8 = 0x8
    NSString *_appName;	// 16 = 0x10
    NSMutableArray *__subcommandArray;	// 24 = 0x18
    SCRCArgumentSubcommand *__subcommand;	// 32 = 0x20
    NSArray *__arguments;	// 40 = 0x28
}

+ (id)commandPath;	// IMP=0x00000000000027e0
+ (id)versionString;	// IMP=0x00000000000027d8
+ (id)processIdentifier;	// IMP=0x00000000000027d0
- (void).cxx_destruct;	// IMP=0x0000000000003da4
@property(copy, nonatomic) NSArray *_arguments; // @synthesize _arguments=__arguments;
@property(retain, nonatomic) SCRCArgumentSubcommand *_subcommand; // @synthesize _subcommand=__subcommand;
@property(retain, nonatomic) NSMutableArray *_subcommandArray; // @synthesize _subcommandArray=__subcommandArray;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool isLaunchedAtLogin; // @synthesize isLaunchedAtLogin=_isLaunchedAtLogin;
- (id)setRunningAtStartup:(id)arg1;	// IMP=0x00000000000039f1
- (id)_displayHelp:(id)arg1;	// IMP=0x0000000000003426
- (id)_displayVersion:(id)arg1;	// IMP=0x000000000000340b
- (void)stop;	// IMP=0x00000000000033ce
- (int)run;	// IMP=0x000000000000338a
- (_Bool)parse;	// IMP=0x0000000000002af5
- (void)addSubcommand:(id)arg1;	// IMP=0x0000000000002a50
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;	// IMP=0x0000000000002843

@end
