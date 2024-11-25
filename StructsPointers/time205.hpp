/*
 * @author Matthew Washburn
 */
 struct Time {
                int hrs;
                int min;
                double sec;
                bool ampm;
                };

        void printTime(struct Time *ptr);

        void printMilTime(struct Time *ptr);